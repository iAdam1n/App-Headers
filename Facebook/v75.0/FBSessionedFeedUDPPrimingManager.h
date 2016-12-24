/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInvalidating.h>

@class FBSessionlessFeedUDPPrimingManager, FBFeedUDPPrimingManagerLogger, NSString;

@interface FBSessionedFeedUDPPrimingManager : NSObject <FBInvalidating> {

	FBSessionlessFeedUDPPrimingManager* _manager;
	BOOL _valid;

}

@property (nonatomic,readonly) FBFeedUDPPrimingManagerLogger * eventLogger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                //@synthesize valid=_valid - In the implementation block
+(id)locationIdentifierForBeforeCursor:(id)arg1 limits:(id)arg2 ;
-(FBFeedUDPPrimingManagerLogger *)eventLogger;
-(void)sendLastCheckedInPacket;
-(void)didReceivePrimedResponse;
-(void)checkinFeedUDPPrimingPacket:(id)arg1 locationIdentifier:(id)arg2 ;
-(void)failedToGeneratePacketWithError:(id)arg1 ;
-(id)checkoutLastSentPacketAtLocationIdentifier:(id)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithManager:(id)arg1 ;
@end
