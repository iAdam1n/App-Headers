/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBLongTextExpandableView;

@interface FBLongTextExpandableCell : UITableViewCell {

	FBLongTextExpandableView* _expandableView;

}

@property (nonatomic,readonly) FBLongTextExpandableView * expandableView;              //@synthesize expandableView=_expandableView - In the implementation block
+(id)defaultBodyFont;
+(double)heightConstrainedToSize:(CGSize)arg1 textLabel:(id)arg2 textLabelFont:(id)arg3 bodyText:(id)arg4 bodyFont:(id)arg5 bodyCollapsedNumberOfLines:(double)arg6 adjustBottomContentInsetToLineHeight:(BOOL)arg7 contentInset:(UIEdgeInsets)arg8 hasDivider:(BOOL)arg9 expanded:(BOOL)arg10 ;
+(void)initialize;
-(FBLongTextExpandableView *)expandableView;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
@end
