/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMUServiceURLSaveStatusChangeListenerDelegate;
@class FBMUServiceSession, NSURL;

@interface FBMUServiceURLSaveStatusChangeListener : NSObject {

	FBMUServiceSession* _session;
	NSURL* _url;
	unsigned long long _status;
	id<FBMUServiceURLSaveStatusChangeListenerDelegate> _delegate;

}

@property (nonatomic,readonly) FBMUServiceSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) id<FBMUServiceURLSaveStatusChangeListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)saveStatusChanged:(id)arg1 ;
-(id)initWithSession:(id)arg1 URL:(id)arg2 ;
-(void)setDelegate:(id<FBMUServiceURLSaveStatusChangeListenerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMUServiceURLSaveStatusChangeListenerDelegate>)delegate;
-(NSURL *)url;
-(unsigned long long)status;
-(FBMUServiceSession *)session;
@end
