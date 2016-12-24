/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(OABaseTableViewCellSeparatorView *)separatorView;
-(void)setSeparatorView:(OABaseTableViewCellSeparatorView *)arg1 ;
-(BOOL)selectable;
-(void)setSelectable:(BOOL)arg1 ;
-(BOOL)hidesSeparator;
-(void)setHidesSeparator:(BOOL)arg1 ;
@end
