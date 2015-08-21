/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/MGXVectorShape.h>

@class MGXAfterEffectsStream;

@interface MGXVectorShapeRectangle : MGXVectorShape {

	MGXAfterEffectsStream* _rectangleStream;
	MGXAfterEffectsStream* _rectanglePositionStream;
	MGXAfterEffectsStream* _rectangleSizeStream;
	MGXAfterEffectsStream* _rectangleRoundnessStream;

}

@property (readonly) MGXAfterEffectsStream * rectangleStream;                       //@synthesize rectangleStream=_rectangleStream - In the implementation block
@property (readonly) MGXAfterEffectsStream * rectanglePositionStream;               //@synthesize rectanglePositionStream=_rectanglePositionStream - In the implementation block
@property (readonly) MGXAfterEffectsStream * rectangleSizeStream;                   //@synthesize rectangleSizeStream=_rectangleSizeStream - In the implementation block
@property (readonly) MGXAfterEffectsStream * rectangleRoundnessStream;              //@synthesize rectangleRoundnessStream=_rectangleRoundnessStream - In the implementation block
-(CGPoint)positionAtTime:(double)arg1 ;
-(id)pathAtTime:(double)arg1 ;
-(CGSize)sizeAtTime:(double)arg1 ;
-(double)roundnessAtTime:(double)arg1 ;
-(id)initWithRectangleStream:(id)arg1 ;
-(MGXAfterEffectsStream *)rectangleStream;
-(MGXAfterEffectsStream *)rectanglePositionStream;
-(MGXAfterEffectsStream *)rectangleSizeStream;
-(MGXAfterEffectsStream *)rectangleRoundnessStream;
@end

