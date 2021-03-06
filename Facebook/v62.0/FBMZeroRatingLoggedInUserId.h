/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ZRLoggedInUserId.h>
#import <Facebook/FBUserSessionClassProvidable.h>

@protocol MNAuthenticationManager;
@class NSString;

@interface FBMZeroRatingLoggedInUserId : NSObject <ZRLoggedInUserId, FBUserSessionClassProvidable> {

	id<MNAuthenticationManager> _authManager;

}

@property (nonatomic,retain) id<MNAuthenticationManager> authManager;              //@synthesize authManager=_authManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loggedInUserId;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAuthManager:(id)arg1 ;
-(id<MNAuthenticationManager>)authManager;
-(void)setAuthManager:(id<MNAuthenticationManager>)arg1 ;
-(void)dealloc;
@end

