/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUserSessionClassProvidable.h>

@class ZRUrlRewriter, ZRApplicationState, NSString;

@interface ZRTariffedUrlBoundary : NSObject <FBUserSessionClassProvidable> {

	ZRUrlRewriter* _rewriter;
	ZRApplicationState* _zeroRatingState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)urlIsUnsafeWebPage:(id)arg1 ;
-(id)initWithRewriter:(id)arg1 zeroRatingState:(id)arg2 ;
-(BOOL)urlIsZeroRatingSafe:(id)arg1 ;
-(void)dealloc;
@end
