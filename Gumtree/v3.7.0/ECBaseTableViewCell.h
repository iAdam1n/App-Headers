/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Gumtree/ECResettableViewProtocol.h>

@class NSString, NSIndexPath;

@interface ECBaseTableViewCell : UITableViewCell <ECResettableViewProtocol> {

	BOOL _supportsOptOut;
	BOOL _constraintsRequired;
	BOOL _stylesApplied;
	id _data;
	unsigned long long _position;
	unsigned long long _backgroundType;
	NSString* _backgroundStyleName;
	id _optOutTarget;
	SEL _optOutAction;
	NSIndexPath* _optOutIndexPath;
	double _cellWidthInset;

}

@property (nonatomic,retain) id data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long position;                    //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundType;              //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,retain) NSString * backgroundStyleName;                 //@synthesize backgroundStyleName=_backgroundStyleName - In the implementation block
@property (assign,nonatomic) BOOL supportsOptOut;                            //@synthesize supportsOptOut=_supportsOptOut - In the implementation block
@property (assign,nonatomic) BOOL optedOut; 
@property (assign,nonatomic) BOOL constraintsRequired;                       //@synthesize constraintsRequired=_constraintsRequired - In the implementation block
@property (assign,nonatomic,__weak) id optOutTarget;                         //@synthesize optOutTarget=_optOutTarget - In the implementation block
@property (assign,nonatomic) SEL optOutAction;                               //@synthesize optOutAction=_optOutAction - In the implementation block
@property (nonatomic,retain) NSIndexPath * optOutIndexPath;                  //@synthesize optOutIndexPath=_optOutIndexPath - In the implementation block
@property (assign,nonatomic) BOOL stylesApplied;                             //@synthesize stylesApplied=_stylesApplied - In the implementation block
@property (assign,nonatomic) double cellWidthInset;                          //@synthesize cellWidthInset=_cellWidthInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellForTable:(id)arg1 reuseIdentifier:(id)arg2 ;
+(double)cellHeight;
+(void)initialize;
+(SCD_Struct_EC7)dimensions;
-(unsigned long long)positionForIndex:(unsigned long long)arg1 totalRows:(unsigned long long)arg2 ;
-(void)applyStyles;
-(double)cellWidthInset;
-(BOOL)supportsOptOut;
-(NSString *)backgroundStyleName;
-(id)backgroundViewForType:(unsigned long long)arg1 ;
-(BOOL)constraintsRequired;
-(BOOL)textLabelIsConstraint;
-(BOOL)detailTextLabelIsConstraint;
-(void)fixConstraintColors;
-(void)logThemingTextStyle:(id)arg1 forUIElement:(id)arg2 textStyleName:(id)arg3 ;
-(void)setStylesApplied:(BOOL)arg1 ;
-(BOOL)stylesApplied;
-(void)setupBackgroundViews;
-(void)setCustomAccessoryImageViewForDisclosureIndicator;
-(void)setSupportsOptOut:(BOOL)arg1 ;
-(BOOL)optedOut;
-(void)setOptedOut:(BOOL)arg1 ;
-(Class)textLabelClass;
-(Class)detailTextLabelClass;
-(void)setConstraintsRequired:(BOOL)arg1 ;
-(void)setBackgroundStyleName:(NSString *)arg1 ;
-(id)optOutTarget;
-(void)setOptOutTarget:(id)arg1 ;
-(SEL)optOutAction;
-(void)setOptOutAction:(SEL)arg1 ;
-(NSIndexPath *)optOutIndexPath;
-(void)setOptOutIndexPath:(NSIndexPath *)arg1 ;
-(void)setCellWidthInset:(double)arg1 ;
-(void)setDefaults;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)awakeFromNib;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)setAccessoryType:(long long)arg1 ;
-(unsigned long long)backgroundType;
-(void)setBackgroundType:(unsigned long long)arg1 ;
@end

