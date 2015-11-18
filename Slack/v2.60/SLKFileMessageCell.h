/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/SLKBaseCell.h>

@protocol SLKMessageGenerics;
@class UIImage;

@interface SLKFileMessageCell : SLKBaseCell {

	BOOL _showHR;
	BOOL _isMention;
	BOOL _fileAboveIsSame;
	id<SLKMessageGenerics> _message;
	UIImage* _image;
	UIImage* _fullImage;
	UIImage* _avatarImage;

}

@property (nonatomic,retain) id<SLKMessageGenerics> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * fullImage;                         //@synthesize fullImage=_fullImage - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                       //@synthesize avatarImage=_avatarImage - In the implementation block
@property (assign,nonatomic) BOOL showHR;                                 //@synthesize showHR=_showHR - In the implementation block
@property (assign,nonatomic) BOOL isMention;                              //@synthesize isMention=_isMention - In the implementation block
@property (assign,nonatomic) BOOL fileAboveIsSame;                        //@synthesize fileAboveIsSame=_fileAboveIsSame - In the implementation block
+(double)heightForRect:(CGRect)arg1 fileMessage:(id)arg2 fileAboveIsSame:(BOOL)arg3 ;
-(UIImage *)fullImage;
-(void)setFullImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(BOOL)isMention;
-(void)setIsMention:(BOOL)arg1 ;
-(void)redisplay;
-(void)setFileAboveIsSame:(BOOL)arg1 ;
-(void)setShowHR:(BOOL)arg1 ;
-(BOOL)showHR;
-(id)cleanAttributedString;
-(id)compactAttributedString;
-(BOOL)fileAboveIsSame;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImage *)image;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(id<SLKMessageGenerics>)message;
-(id)attributedString;
-(void)setMessage:(id<SLKMessageGenerics>)arg1 ;
-(BOOL)isAccessibilityElement;
@end
