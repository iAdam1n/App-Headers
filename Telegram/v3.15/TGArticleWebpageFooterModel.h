/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGWebpageFooterModel.h>

@class TGWebPageMediaAttachment, TGModernTextViewModel, TGSignalImageViewModel, TGModernFlatteningViewModel, TGModernImageViewModel, NSString;

@interface TGArticleWebpageFooterModel : TGWebpageFooterModel {

	TGWebPageMediaAttachment* _webPage;
	TGModernTextViewModel* _siteModel;
	TGModernTextViewModel* _titleModel;
	TGModernTextViewModel* _textModel;
	TGSignalImageViewModel* _imageViewModel;
	TGModernFlatteningViewModel* _durationModel;
	TGModernImageViewModel* _durationBackgroundModel;
	TGModernTextViewModel* _durationLabelModel;
	TGModernImageViewModel* _serviceIconModel;
	TGModernImageViewModel* _instantPageButtonBackgroundModel;
	TGModernImageViewModel* _instantPageButtonIconModel;
	TGModernTextViewModel* _instantPageButtonTextModel;
	BOOL _imageInText;
	NSString* _imageDataInvalidationUrl;
	/*^block*/id _imageDataInvalidationBlock;
	BOOL _isAnimation;
	BOOL _isVideo;
	BOOL _activatedMedia;
	BOOL _isGame;

}
-(void)unbindView:(id)arg1 ;
-(void)imageDataInvalidated:(id)arg1 ;
-(id)referenceViewForImageTransition;
-(void)stopInlineMedia;
-(void)resumeInlineMedia;
-(void)bindSpecialViewsToContainer:(id)arg1 viewStorage:(id)arg2 atItemPosition:(CGPoint)arg3 ;
-(BOOL)isPreviewableAtPoint:(CGPoint)arg1 ;
-(id)linkAtPoint:(CGPoint)arg1 regionData:(id*)arg2 ;
-(BOOL)activateWebpageContents;
-(void)updateOverlayAnimated:(BOOL)arg1 ;
-(void)setMediaIsAvailable:(BOOL)arg1 ;
-(void)updateMediaProgressVisible:(BOOL)arg1 mediaProgress:(float)arg2 animated:(BOOL)arg3 ;
-(id)initWithContext:(id)arg1 incoming:(BOOL)arg2 webPage:(id)arg3 imageInText:(BOOL)arg4 ;
-(void)updateSpecialViewsPositions:(CGPoint)arg1 ;
-(CGSize)contentSizeForContainerSize:(CGSize)arg1 contentSize:(CGSize)arg2 infoWidth:(double)arg3 needsContentsUpdate:(BOOL*)arg4 ;
-(BOOL)preferWebpageSize;
-(BOOL)fitContentToWebpage;
-(int)webpageActionAtPoint:(CGPoint)arg1 ;
-(void)setMediaVisible:(BOOL)arg1 ;
-(void)layoutContentInRect:(CGRect)arg1 bottomInset:(double*)arg2 ;
-(BOOL)webpageContentsActivated;
@end
