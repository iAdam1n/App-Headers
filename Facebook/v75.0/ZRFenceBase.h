/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ZRTariffedUxSessionFence.h>

@class ZRTariffedUxSessionCookie, NSString;

@interface ZRFenceBase : NSObject <ZRTariffedUxSessionFence> {

	ZRTariffedUxSessionCookie* _session;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) ZRTariffedUxSessionCookie * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)zeroRatingStatus;
-(BOOL)willImmediatelyCompleteSuccessfully;
-(void)showAndCompleteWith:(/*^block*/id)arg1 ;
-(void)show;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setSession:(ZRTariffedUxSessionCookie *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(ZRTariffedUxSessionCookie *)session;
-(void)complete:(BOOL)arg1 ;
@end
