/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BaseView.h>

@class NSArray;

@interface VerticalLineView : BaseView {

	NSArray* _verticalLines;

}

@property (nonatomic,retain) NSArray * verticalLines;              //@synthesize verticalLines=_verticalLines - In the implementation block
+(unsigned long long)maxLevelForDisplay;
-(void)setColorForLastVerticalLine:(id)arg1 ;
-(void)resetColorForLastVerticalLine;
-(void)setShouldHighlightBackground:(BOOL)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ignoreMaxLevelForDisplay:(BOOL)arg2 ;
-(NSArray *)verticalLines;
-(void)setVerticalLines:(NSArray *)arg1 ;
-(void)setVerticalLineBottomInset:(long long)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
@end

