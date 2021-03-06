
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_locks_AbstractQueuedSynchronizer__
#define __java_util_concurrent_locks_AbstractQueuedSynchronizer__

#pragma interface

#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
extern "Java"
{
  namespace sun
  {
    namespace misc
    {
        class Unsafe;
    }
  }
}

class java::util::concurrent::locks::AbstractQueuedSynchronizer : public ::java::util::concurrent::locks::AbstractOwnableSynchronizer
{

public: // actually protected
  AbstractQueuedSynchronizer();
  virtual jint getState();
  virtual void setState(jint);
  virtual jboolean compareAndSetState(jint, jint);
private:
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * enq(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * addWaiter(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  void setHead(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  void unparkSuccessor(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  void setHeadAndPropagate(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *, jint);
  void cancelAcquire(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  static jboolean shouldParkAfterFailedAcquire(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *, ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  static void selfInterrupt();
  jboolean parkAndCheckInterrupt();
public: // actually package-private
  virtual jboolean acquireQueued(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *, jint);
private:
  void doAcquireInterruptibly(jint);
  jboolean doAcquireNanos(jint, jlong);
  void doAcquireShared(jint);
  void doAcquireSharedInterruptibly(jint);
  jboolean doAcquireSharedNanos(jint, jlong);
public: // actually protected
  virtual jboolean tryAcquire(jint);
  virtual jboolean tryRelease(jint);
  virtual jint tryAcquireShared(jint);
  virtual jboolean tryReleaseShared(jint);
  virtual jboolean isHeldExclusively();
public:
  virtual void acquire(jint);
  virtual void acquireInterruptibly(jint);
  virtual jboolean tryAcquireNanos(jint, jlong);
  virtual jboolean release(jint);
  virtual void acquireShared(jint);
  virtual void acquireSharedInterruptibly(jint);
  virtual jboolean tryAcquireSharedNanos(jint, jlong);
  virtual jboolean releaseShared(jint);
  virtual jboolean hasQueuedThreads();
  virtual jboolean hasContended();
  virtual ::java::lang::Thread * getFirstQueuedThread();
private:
  ::java::lang::Thread * fullGetFirstQueuedThread();
public:
  virtual jboolean isQueued(::java::lang::Thread *);
public: // actually package-private
  virtual jboolean apparentlyFirstQueuedIsExclusive();
  virtual jboolean isFirst(::java::lang::Thread *);
  virtual jboolean fullIsFirst(::java::lang::Thread *);
public:
  virtual jint getQueueLength();
  virtual ::java::util::Collection * getQueuedThreads();
  virtual ::java::util::Collection * getExclusiveQueuedThreads();
  virtual ::java::util::Collection * getSharedQueuedThreads();
  virtual ::java::lang::String * toString();
public: // actually package-private
  virtual jboolean isOnSyncQueue(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
private:
  jboolean findNodeFromTail(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
public: // actually package-private
  virtual jboolean transferForSignal(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  virtual jboolean transferAfterCancelledWait(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  virtual jint fullyRelease(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
public:
  virtual jboolean owns(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject *);
  virtual jboolean hasWaiters(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject *);
  virtual jint getWaitQueueLength(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject *);
  virtual ::java::util::Collection * getWaitingThreads(::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject *);
private:
  jboolean compareAndSetHead(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  jboolean compareAndSetTail(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *, ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  static jboolean compareAndSetWaitStatus(::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *, jint, jint);
public: // actually package-private
  static void access$0();
private:
  static const jlong serialVersionUID = 7373984972572414691LL;
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * volatile __attribute__((aligned(__alignof__( ::java::util::concurrent::locks::AbstractOwnableSynchronizer)))) head;
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * volatile tail;
  jint volatile state;
public: // actually package-private
  static const jlong spinForTimeoutThreshold = 1000LL;
private:
  static ::sun::misc::Unsafe * unsafe;
  static jlong stateOffset;
  static jlong headOffset;
  static jlong tailOffset;
  static jlong waitStatusOffset;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_locks_AbstractQueuedSynchronizer__
