/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUserSessionClassProvidable.h>

@class ZRApplicationState, NSString;

@interface ZRNetworkActivityDestroyer : NSObject <FBUserSessionClassProvidable> {

	ZRApplicationState* _zeroRatingState;
	int _lastZeroRatingStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)zeroRatingStatusChanged:(id)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 ;
-(void)dealloc;
@end
