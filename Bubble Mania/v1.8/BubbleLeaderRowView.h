/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/LeaderRowView.h>

@class FBProfilePictureView, NSString;

@interface BubbleLeaderRowView : LeaderRowView {

	FBProfilePictureView* profileImageView;
	NSString* fbuid;

}

@property (nonatomic,retain) NSString * fbuid; 
-(void)setUpWithItem:(id)arg1 ;
-(NSString *)fbuid;
-(void)setFbuid:(NSString *)arg1 ;
-(void)resetProfileImage;
-(void)dealloc;
-(id)nibName;
@end

