/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Crystal/Crystal-Structs.h>
@class NSMutableArray;

@interface CLSSymbolResolver : NSObject {

	NSMutableArray* _binaryImages;

}
-(BOOL)loadBinaryImagesFromFile:(id)arg1 ;
-(BOOL)updateStackFrame:(id)arg1 ;
-(id)loadedBinaryImageForPC:(unsigned long long)arg1 ;
-(BOOL)fillInImageDetails:(SCD_Struct_CL8*)arg1 forUUID:(id)arg2 ;
-(id)frameForAddress:(unsigned long long)arg1 ;
-(id)init;
@end
