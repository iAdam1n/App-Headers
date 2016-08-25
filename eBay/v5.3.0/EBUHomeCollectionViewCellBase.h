/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <ComponentUI/SiteSpeedRequiredImageItem.h>
#import <ComponentUI/EUIImageViewLoaderDelegate.h>
#import <eBay/EUIImageViewReusableViewWithImages.h>

@class EBNSiteSpeedTracker, NSLayoutConstraint, NSHashTable, NSString;

@interface EBUHomeCollectionViewCellBase : UICollectionViewCell <SiteSpeedRequiredImageItem, EUIImageViewLoaderDelegate, EUIImageViewReusableViewWithImages> {

	EBNSiteSpeedTracker* _callbackTracker;
	NSLayoutConstraint* _imageViewOneCenterYConstraint;
	NSLayoutConstraint* _imageViewOneCenterXConstraint;
	NSLayoutConstraint* _imageViewOneHeightConstraint;
	NSHashTable* _weakImageRefs;

}

@property (nonatomic,retain) NSHashTable * weakImageRefs;                                     //@synthesize weakImageRefs=_weakImageRefs - In the implementation block
@property (nonatomic,retain) EBNSiteSpeedTracker * callbackTracker;                           //@synthesize callbackTracker=_callbackTracker - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewOneCenterYConstraint;              //@synthesize imageViewOneCenterYConstraint=_imageViewOneCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewOneCenterXConstraint;              //@synthesize imageViewOneCenterXConstraint=_imageViewOneCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewOneHeightConstraint;               //@synthesize imageViewOneHeightConstraint=_imageViewOneHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)makeImageView;
-(NSHashTable *)weakImageRefs;
-(void)cleanupEUIImageViews;
-(id)makeDividerView;
-(NSLayoutConstraint *)imageViewOneCenterYConstraint;
-(BOOL)shouldUseParallax;
-(NSLayoutConstraint *)imageViewOneHeightConstraint;
-(NSLayoutConstraint *)imageViewOneCenterXConstraint;
-(EBNSiteSpeedTracker *)callbackTracker;
-(void)setCallbackTracker:(EBNSiteSpeedTracker *)arg1 ;
-(void)setWeakImageRefs:(NSHashTable *)arg1 ;
-(void)verticalScrollViewDidScroll:(id)arg1 ;
-(void)horizontalScrollViewDidScroll:(id)arg1 ;
-(void)setImageViewOneCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewOneCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewOneHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)onImageLoadNotifyTracker:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(id)className;
-(BOOL)hasImage;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)handleRotation:(id)arg1 ;
-(double)dividerHeight;
@end

