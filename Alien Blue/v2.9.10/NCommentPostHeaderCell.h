/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/NBaseStyledTextCell.h>

@class CommentPostHeaderThumbnailOverlay, JMViewOverlay, FaviconOverlay, PostImagePreviewOverlay, Post;

@interface NCommentPostHeaderCell : NBaseStyledTextCell {

	CommentPostHeaderThumbnailOverlay* _thumbOverlay;
	JMViewOverlay* _titleTextOverlay;
	JMViewOverlay* _titleBackgroundOverlay;
	JMViewOverlay* _subdetailsBar;
	FaviconOverlay* _faviconOverlay;
	PostImagePreviewOverlay* _imagePreviewOverlay;
	JMViewOverlay* _selfTextDivider;
	JMViewOverlay* _expandTextOverlay;

}

@property (retain) CommentPostHeaderThumbnailOverlay * thumbOverlay;              //@synthesize thumbOverlay=_thumbOverlay - In the implementation block
@property (retain) JMViewOverlay * titleTextOverlay;                              //@synthesize titleTextOverlay=_titleTextOverlay - In the implementation block
@property (retain) JMViewOverlay * titleBackgroundOverlay;                        //@synthesize titleBackgroundOverlay=_titleBackgroundOverlay - In the implementation block
@property (retain) JMViewOverlay * subdetailsBar;                                 //@synthesize subdetailsBar=_subdetailsBar - In the implementation block
@property (retain) FaviconOverlay * faviconOverlay;                               //@synthesize faviconOverlay=_faviconOverlay - In the implementation block
@property (retain) PostImagePreviewOverlay * imagePreviewOverlay;                 //@synthesize imagePreviewOverlay=_imagePreviewOverlay - In the implementation block
@property (readonly) Post * post; 
@property (readonly) double recommendedTitleMargin; 
@property (retain) JMViewOverlay * selfTextDivider;                               //@synthesize selfTextDivider=_selfTextDivider - In the implementation block
@property (retain) JMViewOverlay * expandTextOverlay;                             //@synthesize expandTextOverlay=_expandTextOverlay - In the implementation block
+(double)heightForNode:(id)arg1 tableView:(id)arg2 ;
+(double)heightForCellFooterForNode:(id)arg1 bounds:(CGRect)arg2 ;
+(double)titleMarginWithThumbnail;
+(double)minimumHeightWithThumbnail;
+(double)subdetailsBarHeight;
+(double)subdetailsBarBottomMargin;
+(double)heightForCellHeaderForNode:(id)arg1 bounds:(CGRect)arg2 ;
+(double)indentForCellTextForNode:(id)arg1 bounds:(CGRect)arg2 ;
+(double)titleMarginWithoutThumbnail;
-(Post *)post;
-(void)createSubviews;
-(JMViewOverlay *)titleTextOverlay;
-(CommentPostHeaderThumbnailOverlay *)thumbOverlay;
-(JMViewOverlay *)titleBackgroundOverlay;
-(JMViewOverlay *)subdetailsBar;
-(void)layoutCellOverlays;
-(FaviconOverlay *)faviconOverlay;
-(void)setThumbOverlay:(CommentPostHeaderThumbnailOverlay *)arg1 ;
-(void)setSubdetailsBar:(JMViewOverlay *)arg1 ;
-(void)setTitleBackgroundOverlay:(JMViewOverlay *)arg1 ;
-(double)recommendedTitleMargin;
-(void)setTitleTextOverlay:(JMViewOverlay *)arg1 ;
-(void)createSubdetailBar;
-(void)setImagePreviewOverlay:(PostImagePreviewOverlay *)arg1 ;
-(PostImagePreviewOverlay *)imagePreviewOverlay;
-(void)setSelfTextDivider:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)selfTextDivider;
-(void)setExpandTextOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)expandTextOverlay;
-(void)setFaviconOverlay:(FaviconOverlay *)arg1 ;
-(void)updateSubviews;
@end

