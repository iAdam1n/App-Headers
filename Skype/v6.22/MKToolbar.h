/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, MKAlertView;


@protocol MKToolbar <NSObject>
@property (nonatomic,retain) NSArray * options; 
@property (nonatomic,copy) NSString * localizedCancelButtonOptionMenu; 
@property (assign,nonatomic,__weak) id<MKToolbarDelegate> toolbarDelegate; 
@property (nonatomic,__weak,readonly) MKAlertView * currentlyVisibleOptionsActionSheet; 
@property (nonatomic,copy,readonly) NSArray * toolbarItems; 
@optional
-(void)hideWithCompletion:(/*^block*/id)arg1;
-(MKAlertView *)currentlyVisibleOptionsActionSheet;
-(id<MKToolbarDelegate>)toolbarDelegate;
-(unsigned long long)numberOfIcons;
-(id)moreMenuIcon;
-(void)showWithCompletion:(/*^block*/id)arg1;
-(NSString *)localizedCancelButtonOptionMenu;
-(void)setLocalizedCancelButtonOptionMenu:(id)arg1;
-(void)setToolbarDelegate:(id)arg1;
-(void)hide;
-(void)show;
-(NSArray *)toolbarItems;
-(id)iconAtIndex:(unsigned long long)arg1;

@required
-(void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
-(void)setOptions:(id)arg1;
-(NSArray *)options;

@end
