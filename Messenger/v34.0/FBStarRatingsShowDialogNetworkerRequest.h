/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBStarRatingsUserData;

@interface FBStarRatingsShowDialogNetworkerRequest : FBNetworkerRequest {

	FBStarRatingsUserData* _userData;

}

@property (nonatomic,readonly) FBStarRatingsUserData * userData;              //@synthesize userData=_userData - In the implementation block
-(id)networkRequest;
-(id)initWithCallbackPerformer:(id)arg1 userData:(id)arg2 ;
-(FBStarRatingsUserData *)userData;
@end
