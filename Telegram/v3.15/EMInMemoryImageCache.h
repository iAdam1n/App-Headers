/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class NSMutableDictionary;

@interface EMInMemoryImageCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _dict;
	NSMutableDictionary* _residentImages;
	unsigned long long _maxResidentSize;
	unsigned long long _residentImagesTotalSize;
	unsigned long long _nextAccessIndex;

}
-(void)setImageDataWithSize:(CGSize)arg1 generator:(/*^block*/id)arg2 forKey:(id)arg3 ;
-(id)initWithMaxResidentSize:(unsigned long long)arg1 ;
-(void)_addResidentImage:(id)arg1 forKey:(id)arg2 ;
-(void)_debugPrintStats;
-(id)init;
-(id)imageForKey:(id)arg1 ;
@end
