/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EBUDynamicHeightView, EBNViewItemSectionControllerDelegate;
@class EBUItemDisplayDataModel, NSString, UIView, EBNViewItemConfigSection, UIViewController, EBUViewItemActionHandler, UIColor, NSArray;

@interface EBUViewItemSectionController : NSObject {

	EBUItemDisplayDataModel* _model;
	BOOL _isLoading;
	BOOL _userActionsEnabled;
	NSString* _sectionID;
	NSString* _title;
	UIView*<EBUDynamicHeightView> _headerView;
	UIView*<EBUDynamicHeightView> _footerView;
	EBNViewItemConfigSection* _config;
	UIViewController* _presentingViewController;
	UIView* _viewForFullScreenPresentation;
	id<EBNViewItemSectionControllerDelegate> _delegate;
	EBUViewItemActionHandler* _actionHandler;
	UIColor* _topEdgeColor;
	NSArray* _sectionElementsInternal;

}

@property (nonatomic,retain) NSArray * sectionElementsInternal;                                     //@synthesize sectionElementsInternal=_sectionElementsInternal - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                                  //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL isLoading;                                                      //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) NSArray * sectionElements; 
@property (nonatomic,retain) UIView*<EBUDynamicHeightView> headerView;                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView*<EBUDynamicHeightView> footerView;                              //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) EBNViewItemConfigSection * config;                                     //@synthesize config=_config - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                    //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewForFullScreenPresentation;                         //@synthesize viewForFullScreenPresentation=_viewForFullScreenPresentation - In the implementation block
@property (assign,nonatomic,__weak) id<EBNViewItemSectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EBUItemDisplayDataModel * model;                                       //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) EBUViewItemActionHandler * actionHandler;                              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) BOOL userActionsEnabled;                                               //@synthesize userActionsEnabled=_userActionsEnabled - In the implementation block
@property (nonatomic,retain) UIColor * topEdgeColor;                                                //@synthesize topEdgeColor=_topEdgeColor - In the implementation block
+(id)sectionControllerWithID:(id)arg1 ;
+(void)setControllerClass:(Class)arg1 forSectionID:(id)arg2 ;
+(Class)controllerClassForSectionID:(id)arg1 ;
+(id)alloc;
+(void)initialize;
-(void)setSectionElementsInternal:(NSArray *)arg1 ;
-(void)updateViewsForWidth:(double)arg1 ;
-(void)viewItemDidDismiss;
-(void)viewItemWillAppear;
-(void)updateAccessibilityElements;
-(void)setUserActionsEnabled:(BOOL)arg1 ;
-(id)initWithSectionID:(id)arg1 ;
-(NSArray *)sectionElementsInternal;
-(NSArray *)sectionElements;
-(void)grabAccessibilityFocusForFirstView;
-(UIView *)viewForFullScreenPresentation;
-(void)setViewForFullScreenPresentation:(UIView *)arg1 ;
-(BOOL)userActionsEnabled;
-(UIColor *)topEdgeColor;
-(void)setTopEdgeColor:(UIColor *)arg1 ;
-(void)setDelegate:(id<EBNViewItemSectionControllerDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<EBNViewItemSectionControllerDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(NSString *)title;
-(EBUItemDisplayDataModel *)model;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(EBNViewItemConfigSection *)config;
-(UIView*<EBUDynamicHeightView>)headerView;
-(void)setHeaderView:(UIView*<EBUDynamicHeightView>)arg1 ;
-(BOOL)isLoading;
-(UIView*<EBUDynamicHeightView>)footerView;
-(void)setFooterView:(UIView*<EBUDynamicHeightView>)arg1 ;
-(void)setModel:(EBUItemDisplayDataModel *)arg1 ;
-(void)didSelectItemAtIndex:(long long)arg1 ;
-(void)setConfig:(EBNViewItemConfigSection *)arg1 ;
-(void)updateViews;
-(EBUViewItemActionHandler *)actionHandler;
-(void)setActionHandler:(EBUViewItemActionHandler *)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
@end

