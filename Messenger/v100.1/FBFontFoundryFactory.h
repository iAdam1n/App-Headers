/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFontFoundryFactory : NSObject {

	/*^block*/id _block;

}
+(id)fontForSize:(double)arg1 weight:(unsigned long long)arg2 ;
+(void)setCurrentFactoryBlock:(/*^block*/id)arg1 ;
+(void)reset;
+(id)factoryWithBlock:(/*^block*/id)arg1 ;
-(void)set;
@end
