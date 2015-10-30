/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UITableViewCell.h>

@class OABaseTableViewCellSeparatorView;

@interface OABaseTableViewCell : UITableViewCell {

	BOOL _selectable;
	BOOL _respectsSeparatorInset;
	BOOL _hidesSeparator;
	OABaseTableViewCellSeparatorView* _separatorView;

}

@property (assign,nonatomic) BOOL selectable;                                               //@synthesize selectable=_selectable - In the implementation block
@property (assign,nonatomic) BOOL respectsSeparatorInset;                                   //@synthesize respectsSeparatorInset=_respectsSeparatorInset - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparator;                                           //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (nonatomic,retain) OABaseTableViewCellSeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(void)cellWasTapped:(id)arg1 ;
-(void)setRespectsSeparatorInset:(BOOL)arg1 ;
-(void)performInternalSetup;
-(void)layoutSeparator;
-(BOOL)respectsSeparatorInset;
-(BOOL)hidesSeparator;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(OABaseTableViewCellSeparatorView *)separatorView;
-(void)setSeparatorView:(OABaseTableViewCellSeparatorView *)arg1 ;
-(BOOL)selectable;
-(void)setSelectable:(BOOL)arg1 ;
@end
