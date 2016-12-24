/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class UIColor;

@interface ITCCollectionViewGridLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _pinnedHeader;
	BOOL _editing;
	BOOL _movable;
	BOOL _shouldCalculateFittingSize;
	UIColor* _backgroundColor;
	UIColor* _selectedBackgroundColor;
	long long _columnIndex;
	double _unpinnedY;
	UIEdgeInsets _padding;

}

@property (assign,getter=isPinnedHeader,nonatomic) BOOL pinnedHeader;              //@synthesize pinnedHeader=_pinnedHeader - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedBackgroundColor;                    //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                 //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long columnIndex;                                //@synthesize columnIndex=_columnIndex - In the implementation block
@property (assign,nonatomic) BOOL editing;                                         //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL movable;                                         //@synthesize movable=_movable - In the implementation block
@property (assign,nonatomic) double unpinnedY;                                     //@synthesize unpinnedY=_unpinnedY - In the implementation block
@property (assign,nonatomic) BOOL shouldCalculateFittingSize;                      //@synthesize shouldCalculateFittingSize=_shouldCalculateFittingSize - In the implementation block
-(UIColor *)selectedBackgroundColor;
-(BOOL)movable;
-(void)setMovable:(BOOL)arg1 ;
-(BOOL)shouldCalculateFittingSize;
-(BOOL)isPinnedHeader;
-(void)setPinnedHeader:(BOOL)arg1 ;
-(void)setShouldCalculateFittingSize:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setColumnIndex:(long long)arg1 ;
-(long long)columnIndex;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
-(void)setUnpinnedY:(double)arg1 ;
-(double)unpinnedY;
@end
