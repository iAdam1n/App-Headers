/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface EBKOrientationService : NSObject {

	/*^block*/id _orientationDidChangeBlock;

}

@property (nonatomic,copy) id orientationDidChangeBlock;              //@synthesize orientationDidChangeBlock=_orientationDidChangeBlock - In the implementation block
+(CGAffineTransform)affineTransformForCurrentDeviceOrientation;
+(CGAffineTransform)affineTransformForDeviceOrientation:(long long)arg1 ;
-(id)initWithOrientationDidChangeBlock:(/*^block*/id)arg1 ;
-(void)orientationDidChangeNotification:(id)arg1 ;
-(void)setOrientationDidChangeBlock:(id)arg1 ;
-(id)orientationDidChangeBlock;
-(void)dealloc;
@end
