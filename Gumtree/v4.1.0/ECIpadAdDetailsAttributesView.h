/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class ECArrayView, NSLayoutConstraint, NSArray;

@interface ECIpadAdDetailsAttributesView : UIView {

	BOOL _needsColumnCountReconfiguration;
	ECArrayView* _leftAttributesListView;
	ECArrayView* _rightAttributesListView;
	NSLayoutConstraint* _equalWidthsConstraint;
	NSArray* _singleColumnHorizontalConstraint;
	NSArray* _doubleColumnHorizontalConstraint;
	NSArray* _attributes;
	long long _interfaceOrientation;

}

@property (nonatomic,retain) ECArrayView * leftAttributesListView;                    //@synthesize leftAttributesListView=_leftAttributesListView - In the implementation block
@property (nonatomic,retain) ECArrayView * rightAttributesListView;                   //@synthesize rightAttributesListView=_rightAttributesListView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * equalWidthsConstraint;              //@synthesize equalWidthsConstraint=_equalWidthsConstraint - In the implementation block
@property (nonatomic,retain) NSArray * singleColumnHorizontalConstraint;              //@synthesize singleColumnHorizontalConstraint=_singleColumnHorizontalConstraint - In the implementation block
@property (nonatomic,retain) NSArray * doubleColumnHorizontalConstraint;              //@synthesize doubleColumnHorizontalConstraint=_doubleColumnHorizontalConstraint - In the implementation block
@property (assign,nonatomic) BOOL needsColumnCountReconfiguration;                    //@synthesize needsColumnCountReconfiguration=_needsColumnCountReconfiguration - In the implementation block
@property (nonatomic,retain) NSArray * attributes;                                    //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                          //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(void)setupAttributes:(id)arg1 ;
-(void)reformatAttributes;
-(ECArrayView *)leftAttributesListView;
-(ECArrayView *)rightAttributesListView;
-(void)setEqualWidthsConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSingleColumnHorizontalConstraint:(NSArray *)arg1 ;
-(void)setDoubleColumnHorizontalConstraint:(NSArray *)arg1 ;
-(BOOL)needsColumnCountReconfiguration;
-(unsigned long long)columnCountForCurrentOrientation;
-(void)configureColumns:(unsigned long long)arg1 ;
-(void)setNeedsColumnCountReconfiguration:(BOOL)arg1 ;
-(NSLayoutConstraint *)equalWidthsConstraint;
-(NSArray *)doubleColumnHorizontalConstraint;
-(NSArray *)singleColumnHorizontalConstraint;
-(id)valueTextForAttribute:(id)arg1 ;
-(void)addValue:(id)arg1 label:(id)arg2 tappable:(BOOL)arg3 canonicalLabel:(id)arg4 toArrayView:(id)arg5 ;
-(void)addValue:(id)arg1 label:(id)arg2 canonicalLabel:(id)arg3 toArrayView:(id)arg4 ;
-(void)setupAttributesWithAd:(id)arg1 ;
-(void)setLeftAttributesListView:(ECArrayView *)arg1 ;
-(void)setRightAttributesListView:(ECArrayView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)updateConstraints;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
@end
