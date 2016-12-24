/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MKImagePickerViewDelegate;
@class UIScrollView, UIView, MKPageControl, NSArray, NSMutableArray, MKImagePickerViewStylesheet, NSString;

@interface MKImagePickerView : UIView <UIScrollViewDelegate> {

	id<MKImagePickerViewDelegate> _delegate;
	UIScrollView* _scrollView;
	UIView* _bottomBarView;
	MKPageControl* _pageControl;
	NSArray* _collection;
	NSMutableArray* _buttons;
	long long _imagesPerPage;
	MKImagePickerViewStylesheet* _stylesheet;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * bottomBarView;                                     //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (nonatomic,retain) MKPageControl * pageControl;                                //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) NSArray * collection;                                       //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) long long imagesPerPage;                                    //@synthesize imagesPerPage=_imagesPerPage - In the implementation block
@property (nonatomic,retain) MKImagePickerViewStylesheet * stylesheet;                   //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic,__weak) id<MKImagePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imagePickerViewWithFrame:(CGRect)arg1 collection:(id)arg2 ;
-(void)mk_commonInit;
-(UIView *)bottomBarView;
-(void)didSelectImage:(id)arg1 ;
-(void)bindOriginalModel:(id)arg1 withButton:(id)arg2 ;
-(void)didAddCollection;
-(void)didLongPressImage:(id)arg1 ;
-(long long)pageForScrollOffset:(double)arg1 ;
-(void)disposeImages;
-(double)minHorizontalMarginForOrientation:(long long)arg1 ;
-(double)minVerticalMarginForOrientation:(long long)arg1 ;
-(double)horizontalPaddingForOrientation:(long long)arg1 ;
-(double)topVerticalPaddingForOrientation:(long long)arg1 ;
-(double)bottomVerticalPaddingForOrientation:(long long)arg1 ;
-(void)setImagesPerPage:(long long)arg1 ;
-(long long)imagesPerPage;
-(id)messageToAnnounceForPageScrolled;
-(void)addObjectsToCollection:(id)arg1 ;
-(void)removeObjectsFromCollection:(id)arg1 ;
-(void)setBottomBarView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MKImagePickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MKImagePickerViewDelegate>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(NSMutableArray *)buttons;
-(MKPageControl *)pageControl;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(NSArray *)collection;
-(void)setCollection:(NSArray *)arg1 ;
-(void)setPageControl:(MKPageControl *)arg1 ;
-(MKImagePickerViewStylesheet *)stylesheet;
-(void)setStylesheet:(MKImagePickerViewStylesheet *)arg1 ;
@end
