
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_AffineTransformOp__
#define __java_awt_image_AffineTransformOp__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class RenderingHints;
      namespace geom
      {
          class AffineTransform;
          class Point2D;
          class Rectangle2D;
      }
      namespace image
      {
          class AffineTransformOp;
          class BufferedImage;
          class ColorModel;
          class Raster;
          class WritableRaster;
      }
    }
  }
}

class java::awt::image::AffineTransformOp : public ::java::lang::Object
{

public:
  AffineTransformOp(::java::awt::geom::AffineTransform *, jint);
  AffineTransformOp(::java::awt::geom::AffineTransform *, ::java::awt::RenderingHints *);
  virtual ::java::awt::image::BufferedImage * createCompatibleDestImage(::java::awt::image::BufferedImage *, ::java::awt::image::ColorModel *);
  virtual ::java::awt::image::WritableRaster * createCompatibleDestRaster(::java::awt::image::Raster *);
  virtual ::java::awt::image::BufferedImage * filter(::java::awt::image::BufferedImage *, ::java::awt::image::BufferedImage *);
  virtual ::java::awt::image::WritableRaster * filter(::java::awt::image::Raster *, ::java::awt::image::WritableRaster *);
  virtual ::java::awt::geom::Rectangle2D * getBounds2D(::java::awt::image::BufferedImage *);
  virtual ::java::awt::geom::Rectangle2D * getBounds2D(::java::awt::image::Raster *);
  virtual jint getInterpolationType();
  virtual ::java::awt::geom::Point2D * getPoint2D(::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual ::java::awt::RenderingHints * getRenderingHints();
  virtual ::java::awt::geom::AffineTransform * getTransform();
private:
  void filterNearest(::java::awt::image::Raster *, ::java::awt::image::WritableRaster *, JArray< jdouble > *, JArray< jdouble > *);
  void filterBilinear(::java::awt::image::Raster *, ::java::awt::image::WritableRaster *, JArray< jdouble > *, JArray< jdouble > *);
  void filterBicubic(::java::awt::image::Raster *, ::java::awt::image::WritableRaster *, JArray< jdouble > *, JArray< jdouble > *);
public:
  static const jint TYPE_NEAREST_NEIGHBOR = 1;
  static const jint TYPE_BILINEAR = 2;
  static const jint TYPE_BICUBIC = 3;
private:
  ::java::awt::geom::AffineTransform * __attribute__((aligned(__alignof__( ::java::lang::Object)))) transform;
  ::java::awt::RenderingHints * hints;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_image_AffineTransformOp__
