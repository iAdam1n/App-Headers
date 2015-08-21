/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBFilterBarControllerDelegate;
@class FBFilterBarView, NSMutableDictionary, FBFilterButton, FBUserSession, UIImage, FBCPUImageFilterState, FBImageProcessingRequest, FBGLFilter, UIView;

@interface FBFilterBarController : UIViewController {

	FBFilterBarView* _filterBarView;
	NSMutableDictionary* _buttonImages;
	NSMutableDictionary* _buttonImagesWithLux;
	unsigned long long _mediaPickerStyle;
	BOOL _cpuFiltersEnabled;
	FBFilterButton* _originalButton;
	FBUserSession* _session;
	BOOL _unifiedMediaGallery;
	BOOL _luxEnabled;
	BOOL _firstView;
	id<FBFilterBarControllerDelegate> _delegate;
	UIImage* _image;
	FBCPUImageFilterState* _cpuFilterState;
	FBCPUImageFilterState* _selectedCPUFilterState;
	FBImageProcessingRequest* _filterPreviewRequest;
	FBImageProcessingRequest* _filterPreviewRequestWithLux;

}

@property (assign,nonatomic,__weak) id<FBFilterBarControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                     //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL luxEnabled;                                                     //@synthesize luxEnabled=_luxEnabled - In the implementation block
@property (nonatomic,retain) FBCPUImageFilterState * cpuFilterState;                              //@synthesize cpuFilterState=_cpuFilterState - In the implementation block
@property (nonatomic,retain) FBGLFilter * selectedFilter; 
@property (nonatomic,retain) FBCPUImageFilterState * selectedCPUFilterState;                      //@synthesize selectedCPUFilterState=_selectedCPUFilterState - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) FBImageProcessingRequest * filterPreviewRequest;                     //@synthesize filterPreviewRequest=_filterPreviewRequest - In the implementation block
@property (nonatomic,retain) FBImageProcessingRequest * filterPreviewRequestWithLux;              //@synthesize filterPreviewRequestWithLux=_filterPreviewRequestWithLux - In the implementation block
@property (assign,nonatomic) BOOL firstView;                                                      //@synthesize firstView=_firstView - In the implementation block
-(FBCPUImageFilterState *)cpuFilterState;
-(void)setCpuFilterState:(FBCPUImageFilterState *)arg1 ;
-(id)_allCPUFilterStates;
-(void)_createButtonWithFilter:(id)arg1 orCPUImageFilterState:(id)arg2 ;
-(void)_loadImagePreviewsAndApplyFilterToButtons;
-(FBCPUImageFilterState *)selectedCPUFilterState;
-(unsigned long long)_buttonIndexForFilterName:(id)arg1 ;
-(void)setFilterPreviewRequest:(FBImageProcessingRequest *)arg1 ;
-(void)setFilterPreviewRequestWithLux:(FBImageProcessingRequest *)arg1 ;
-(void)_tapApplyCPUFilterButton:(id)arg1 ;
-(void)_tapApplyFilterButton:(id)arg1 ;
-(void)setSelectedCPUFilterState:(FBCPUImageFilterState *)arg1 ;
-(void)fadeOutImages;
-(id)currentSelectedPreviewImageWithLux:(BOOL)arg1 ;
-(void)setLuxEnabled:(BOOL)arg1 ;
-(BOOL)luxEnabled;
-(FBImageProcessingRequest *)filterPreviewRequest;
-(FBImageProcessingRequest *)filterPreviewRequestWithLux;
-(id)initWithFrame:(CGRect)arg1 mediaPickerStyle:(unsigned long long)arg2 cpuFiltersEnabled:(BOOL)arg3 unifiedMediaGallery:(BOOL)arg4 session:(id)arg5 ;
-(void)setSelectedFilter:(FBGLFilter *)arg1 ;
-(void)resetSelectedFilterToNormalFilterWithoutScrolling;
-(FBGLFilter *)selectedFilter;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<FBFilterBarControllerDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id<FBFilterBarControllerDelegate>)delegate;
-(UIImage *)image;
-(UIView *)contentView;
-(void)loadView;
-(void)viewDidLoad;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setFirstView:(BOOL)arg1 ;
-(BOOL)firstView;
@end

