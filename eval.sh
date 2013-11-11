#!/bin/bash -e
#!/bin/bash -vxe

path= /local/janker/eval/build/cRefactor-BusyBoxEvaluation

filesToProcess() {
  local listFile=$path/busybox_files
  cat $listFile
}

flags=" --bdd \
  --canBuild --refLink $path/busyboxfinal.interface
  -x CONFIG_ \
  -c $path/redhat.properties \
  --include $path/config.h \
  -I $path/busybox-1.18.5/include \
  --featureModelDimacs $path/BB_fm.dimacs \
  --recordTiming --parserstatistics --lexNoStdout \
  -U HAVE_LIBDMALLOC \
  -DCONFIG_FIND \
  -U CONFIG_FEATURE_WGET_LONG_OPTIONS \
  -U ENABLE_NC_110_COMPAT \
  -U CONFIG_EXTRA_COMPAT \
  -D_GNU_SOURCE"


filesToProcess|while read i; do
         echo "Analysing $path/busybox-1.18.5/$i.c"
         echo "With settings: $flags"
         ../TypeChef/cRefactor.sh $path/busybox-1.18.5/$i.c $flags
	 done
