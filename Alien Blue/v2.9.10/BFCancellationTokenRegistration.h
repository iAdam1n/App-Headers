/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)init;
-(NSObject *)lock;
-(BFCancellationToken *)token;
-(void)setToken:(BFCancellationToken *)arg1 ;
-(void)notifyDelegate;
-(void)dispose;
-(void)setLock:(NSObject *)arg1 ;
@end

