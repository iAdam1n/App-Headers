/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class BFCancellationToken, NSObject;

@interface BFCancellationTokenRegistration : NSObject {

	BOOL _disposed;
	BFCancellationToken* _token;
	/*^block*/id _cancellationObserverBlock;
	NSObject* _lock;

}

@property (assign,nonatomic,__weak) BFCancellationToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id cancellationObserverBlock;                      //@synthesize cancellationObserverBlock=_cancellationObserverBlock - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                   //@synthesize disposed=_disposed - In the implementation block
+(id)registrationWithToken:(id)arg1 delegate:(/*^block*/id)arg2 ;
-(void)throwIfDisposed;
-(BOOL)disposed;
-(void)setDisposed:(BOOL)arg1 ;
-(void)setCancellationObserverBlock:(id)arg1 ;
-(id)cancellationObserverBlock;
-(void)notifyDelegate;
-(void)dispose;
-(id)init;
-(NSObject *)lock;
-(BFCancellationToken *)token;
-(void)setToken:(BFCancellationToken *)arg1 ;
-(void)setLock:(NSObject *)arg1 ;
@end

