/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessageCellContentLayoutInfo : FBValueObject <NSCopying> {

	double _maxContentWidth;
	double _minContentLeftMargin;
	double _minContentRightMargin;
	double _contentLeftMargin;
	double _contentRightMargin;
	CGSize _viewportSize;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize viewportSize;                       //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,readonly) double maxContentWidth;                    //@synthesize maxContentWidth=_maxContentWidth - In the implementation block
@property (nonatomic,readonly) double minContentLeftMargin;               //@synthesize minContentLeftMargin=_minContentLeftMargin - In the implementation block
@property (nonatomic,readonly) double minContentRightMargin;              //@synthesize minContentRightMargin=_minContentRightMargin - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                        //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) double contentLeftMargin;                  //@synthesize contentLeftMargin=_contentLeftMargin - In the implementation block
@property (nonatomic,readonly) double contentRightMargin;                 //@synthesize contentRightMargin=_contentRightMargin - In the implementation block
-(double)maxContentWidth;
-(double)minContentLeftMargin;
-(double)minContentRightMargin;
-(id)initWithViewportSize:(CGSize)arg1 maxContentWidth:(double)arg2 minContentLeftMargin:(double)arg3 minContentRightMargin:(double)arg4 contentSize:(CGSize)arg5 contentLeftMargin:(double)arg6 contentRightMargin:(double)arg7 ;
-(double)contentRightMargin;
-(double)contentLeftMargin;
-(CGSize)contentSize;
-(CGSize)viewportSize;
@end
