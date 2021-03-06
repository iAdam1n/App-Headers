/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseTableViewCell.h>

@protocol ECResettableViewProtocolECTableViewCellSubviewProtocol;
@class UIView;

@interface ECSubviewBasedTableViewCell : ECBaseTableViewCell {

	UIView*<ECResettableViewProtocol>*<ECTableViewCellSubviewProtocol> _subview;

}

@property (nonatomic,retain) UIView*<ECResettableViewProtocol>*<ECTableViewCellSubviewProtocol> subview;              //@synthesize subview=_subview - In the implementation block
+(id)cellForTable:(id)arg1 reuseIdentifier:(id)arg2 ;
+(id)cellForTable:(id)arg1 reuseIdentifier:(id)arg2 subviewNibName:(id)arg3 ;
-(void)setDefaults;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)setSubview:(UIView*<ECResettableViewProtocol>*<ECTableViewCellSubviewProtocol>)arg1 ;
-(UIView*<ECResettableViewProtocol>*<ECTableViewCellSubviewProtocol>)subview;
@end

