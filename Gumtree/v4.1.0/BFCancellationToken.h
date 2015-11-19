/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, NSObject;

@interface BFCancellationToken : NSObject {

	BOOL _cancellationRequested;
	BOOL _disposed;
	NSMutableArray* _registrations;
	NSObject* _lock;

}

@property (assign,getter=isCancellationRequested,nonatomic) BOOL cancellationRequested;              //@synthesize cancellationRequested=_cancellationRequested - In the implementation block
@property (nonatomic,retain) NSMutableArray * registrations;                                         //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                                        //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                                          //@synthesize disposed=_disposed - In the implementation block
-(void)throwIfDisposed;
-(void)cancelPrivate;
-(NSMutableArray *)registrations;
-(void)notifyCancellation:(id)arg1 ;
-(BOOL)isCancellationRequested;
-(BOOL)disposed;
-(void)setDisposed:(BOOL)arg1 ;
-(id)registerCancellationObserverWithBlock:(/*^block*/id)arg1 ;
-(void)unregisterRegistration:(id)arg1 ;
-(void)cancelAfterDelay:(int)arg1 ;
-(void)setCancellationRequested:(BOOL)arg1 ;
-(void)setRegistrations:(NSMutableArray *)arg1 ;
-(void)dispose;
-(void)cancel;
-(id)init;
-(NSObject *)lock;
-(void)setLock:(NSObject *)arg1 ;
@end

