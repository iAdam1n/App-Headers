/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray;

@interface FBRadialGradientLayer : CALayer {

	NSArray* _colors;
	NSArray* _locations;

}

@property (retain) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (retain) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)colors;
-(void)drawInContext:(CGContextRef)arg1 ;
-(NSArray *)locations;
@end

