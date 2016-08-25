/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface FlurryTumblrBlogCell : UITableViewCell {

	double _cellHeight;
	double _cellWidth;
	NSString* _blogName;
	UIImageView* _avatarImageView;
	NSString* _avatarPath;
	UILabel* _blogNameLabel;

}

@property (nonatomic,retain) UILabel * blogNameLabel;                    //@synthesize blogNameLabel=_blogNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * avatarImageView;              //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (assign,nonatomic) double cellWidth;                           //@synthesize cellWidth=_cellWidth - In the implementation block
@property (assign,nonatomic) double cellHeight;                          //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,retain) NSString * blogName;                        //@synthesize blogName=_blogName - In the implementation block
@property (nonatomic,retain) NSString * avatarPath;                      //@synthesize avatarPath=_avatarPath - In the implementation block
-(void)createView;
-(id)initWithBlogName:(id)arg1 avatarPath:(id)arg2 cellWidth:(double)arg3 cellHeight:(double)arg4 ;
-(void)setBlogName:(NSString *)arg1 ;
-(void)setAvatarPath:(NSString *)arg1 ;
-(NSString *)blogName;
-(NSString *)avatarPath;
-(void)setCellHeight:(double)arg1 ;
-(void)setCellWidth:(double)arg1 ;
-(void)setAvatarImageView:(UIImageView *)arg1 ;
-(UIImageView *)avatarImageView;
-(void)setBlogNameLabel:(UILabel *)arg1 ;
-(UILabel *)blogNameLabel;
-(id)init;
-(double)cellHeight;
-(double)cellWidth;
@end

