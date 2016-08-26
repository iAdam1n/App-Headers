/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/FBConnectRowView.h>

@class S8SafeFBProfilePictureView, NSArray;

@interface FBInviteFriendsRowView : FBConnectRowView {

	S8SafeFBProfilePictureView* friendProfileImageContainer1;
	S8SafeFBProfilePictureView* friendProfileImageContainer2;
	S8SafeFBProfilePictureView* friendProfileImageContainer3;
	S8SafeFBProfilePictureView* friendProfileImageContainer4;
	NSArray* randomFriendIds;

}

@property (nonatomic,retain) S8SafeFBProfilePictureView * friendProfileImageContainer1; 
@property (nonatomic,retain) S8SafeFBProfilePictureView * friendProfileImageContainer2; 
@property (nonatomic,retain) S8SafeFBProfilePictureView * friendProfileImageContainer3; 
@property (nonatomic,retain) S8SafeFBProfilePictureView * friendProfileImageContainer4; 
@property (nonatomic,retain) NSArray * randomFriendIds; 
-(void)buttonTapped;
-(void)setupWithFriendData:(id)arg1 ;
-(NSArray *)randomFriendIds;
-(void)setRandomFriendIds:(NSArray *)arg1 ;
-(void)displayFBFriends;
-(S8SafeFBProfilePictureView *)friendProfileImageContainer1;
-(void)setFriendProfileImageContainer1:(S8SafeFBProfilePictureView *)arg1 ;
-(S8SafeFBProfilePictureView *)friendProfileImageContainer2;
-(void)setFriendProfileImageContainer2:(S8SafeFBProfilePictureView *)arg1 ;
-(S8SafeFBProfilePictureView *)friendProfileImageContainer3;
-(void)setFriendProfileImageContainer3:(S8SafeFBProfilePictureView *)arg1 ;
-(S8SafeFBProfilePictureView *)friendProfileImageContainer4;
-(void)setFriendProfileImageContainer4:(S8SafeFBProfilePictureView *)arg1 ;
-(void)dealloc;
@end
