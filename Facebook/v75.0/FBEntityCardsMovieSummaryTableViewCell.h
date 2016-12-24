/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class CKComponentHostingView, FBNetworkImageView, FBRichTextView;

@interface FBEntityCardsMovieSummaryTableViewCell : UITableViewCell {

	CKComponentHostingView* _thumbnailVideoView;
	FBNetworkImageView* _imageView;
	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	FBRichTextView* _captionView;
	double _sidePadding;

}
+(id)attributedStringWithCaptionHeader:(id)arg1 caption:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 imageDownloader:(id)arg3 videoComponentHostingView:(id)arg4 ;
-(void)configureWithImageUrl:(id)arg1 title:(id)arg2 subtitle:(id)arg3 captionHeader:(id)arg4 caption:(id)arg5 toolbox:(id)arg6 video:(id)arg7 sidePadding:(double)arg8 ;
-(void)layoutSubviews;
@end
