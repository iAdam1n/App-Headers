/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBUserSession, FBMemTaggableActivity;

@interface FBComposerTaggableActivityTableViewCell : UITableViewCell {

	id _glyphDownload;
	unsigned long long _style;
	double _textLabelLeftPadding;
	double _thumbnailLeftPadding;
	FBUserSession* _session;
	FBMemTaggableActivity* _taggableActivity;
	double _thumbnailSize;

}

@property (nonatomic,readonly) FBUserSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemTaggableActivity * taggableActivity;              //@synthesize taggableActivity=_taggableActivity - In the implementation block
@property (assign,nonatomic) double thumbnailSize;                                  //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
-(void)_O_hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_O_hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTaggableActivity:(FBMemTaggableActivity *)arg1 ;
-(FBMemTaggableActivity *)taggableActivity;
-(id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 style:(unsigned long long)arg3 ;
-(void)_showChevronWithSolidColor:(id)arg1 ;
-(void)_setTextColorsHovered:(BOOL)arg1 ;
-(void)_showGlyph:(id)arg1 solidColor:(id)arg2 ;
-(void)layoutSubviews;
-(FBUserSession *)session;
-(double)thumbnailSize;
-(void)setThumbnailSize:(double)arg1 ;
@end
