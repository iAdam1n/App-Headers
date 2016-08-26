/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarPickerController.h>
#import <Facebook/FBFacecastInvitedUsersSourceDelegate.h>

@class NSArray, FBFacecastAlreadyInvitedUsersSource, NSString;

@interface FBFacecastInviteFriendsPickerController : FBAvatarPickerController <FBFacecastInvitedUsersSourceDelegate> {

	NSArray* _alreadyInvitedFriends;
	FBFacecastAlreadyInvitedUsersSource* _alreadyInvitedSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)fetchAlreadyInvitedUsers:(id)arg1 alreadyInvitedUsers:(id)arg2 ;
-(void)_setupDataSourceWithSession:(id)arg1 taggableCollections:(id)arg2 sortDescriptors:(id)arg3 videoID:(id)arg4 ;
-(id)initWithSession:(id)arg1 target:(id)arg2 videoID:(id)arg3 ;
@end
