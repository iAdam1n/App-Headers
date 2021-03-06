/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBVideoCreativeToolsApplier, FBMediaCreativeToolFilterViewDelegate;
@class NSMutableArray, UIView, NSString;

@interface FBMediaCreativeToolFilterView : UIScrollView <UIScrollViewDelegate> {

	NSMutableArray* _buttons;
	NSMutableArray* _labels;
	NSMutableArray* _surfaceViews;
	NSMutableArray* _videoProcessors;
	UIView* _selectionIndicator;
	atomic<FBRange> _visibleButtonRange;
	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	BOOL _enableStaticFilteredImage;
	unsigned long long _selectedIndex;
	id<FBMediaCreativeToolFilterViewDelegate> _filterDelegate;

}

@property (assign,nonatomic) unsigned long long selectedIndex;                                             //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolFilterViewDelegate> filterDelegate;              //@synthesize filterDelegate=_filterDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBMediaCreativeToolFilterViewDelegate>)filterDelegate;
-(void)setFilterDelegate:(id<FBMediaCreativeToolFilterViewDelegate>)arg1 ;
-(void)_didSelectButton:(id)arg1 ;
-(void)_computeVisibleButtonIndices;
-(id)initWithSession:(id)arg1 creativeToolsApplier:(id)arg2 filters:(id)arg3 masksEnabled:(BOOL)arg4 enableStaticFilteredImage:(BOOL)arg5 ;
-(void)updateViewWithCameraSampleBuffer:(opaqueCMSampleBufferRef)arg1 contentTransform:(GLKMatrix4)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
@end

