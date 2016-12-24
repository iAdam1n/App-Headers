/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSArray, FBTabBarItem;


@protocol FBTabBarProtocol
@property (nonatomic,readonly) UIColor * iconColor; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,retain) FBTabBarItem * selectedItem; 
@property (assign,nonatomic,__weak) id<FBTabBarDelegate> delegate; 
@property (nonatomic,copy) NSArray * auxiliaryItems; 
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator; 
@optional
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id)arg1;
-(NSArray *)auxiliaryItems;
-(void)setAuxiliaryItems:(id)arg1;

@required
-(UIColor *)iconColor;
-(id)tabBarItemAtPoint:(CGPoint)arg1;
-(CGRect*)rectOfTabBarItem:(id)arg1;
-(BOOL)itemLabelsAreHidden;
-(void)setDelegate:(id)arg1;
-(id<FBTabBarDelegate>)delegate;
-(NSArray *)items;
-(void)setItems:(id)arg1;
-(void)setSelectedItem:(id)arg1;
-(FBTabBarItem *)selectedItem;

@end
