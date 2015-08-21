/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseTableViewCell.h>

@class NSArray;

@interface ECViewArrayTableViewCell : ECBaseTableViewCell {

	NSArray* _viewArray;
	double _minimumHeight;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) NSArray * viewArray;                  //@synthesize viewArray=_viewArray - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double minimumHeight;                 //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(void)setViewArray:(NSArray *)arg1 ;
-(NSArray *)viewArray;
-(void)setDefaults;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
@end

