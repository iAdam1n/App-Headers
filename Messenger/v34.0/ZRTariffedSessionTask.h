/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ZRTariffedSessionTaskDelegate;
@class ZRTariffedUxSessionCookie;

@interface ZRTariffedSessionTask : NSObject {

	ZRTariffedUxSessionCookie* _session;
	id<ZRTariffedSessionTaskDelegate> _delegate;

}

@property (nonatomic,retain) ZRTariffedUxSessionCookie * session;                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) id<ZRTariffedSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_sessionValidityChanged:(id)arg1 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<ZRTariffedSessionTaskDelegate>)arg1 ;
-(id<ZRTariffedSessionTaskDelegate>)delegate;
-(ZRTariffedUxSessionCookie *)session;
-(void)setSession:(ZRTariffedUxSessionCookie *)arg1 ;
@end

