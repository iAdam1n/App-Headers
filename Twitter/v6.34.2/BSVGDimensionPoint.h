/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class BSVGDimension;

@interface BSVGDimensionPoint : NSObject {

	BSVGDimension* _x;
	BSVGDimension* _y;

}

@property (x,nonatomic,readonly) BSVGDimension * x;              //@synthesize x=_x - In the implementation block
@property (y,nonatomic,readonly) BSVGDimension * y;              //@synthesize y=_y - In the implementation block
-(id)initWithX:(id)arg1 y:(id)arg2 ;
-(id)description;
-(BSVGDimension *)x;
-(BSVGDimension *)y;
-(id)shortDescription;
@end
