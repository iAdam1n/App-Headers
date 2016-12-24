/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTimeInputOptionType.h>

@class NSNumberFormatter, NSString;

@interface FBTimeInputOptionNumbers : NSObject <FBTimeInputOptionType> {

	unsigned long long _minNumber;
	unsigned long long _maxNumber;
	NSNumberFormatter* _formatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMinNumber:(unsigned long long)arg1 maxNumber:(unsigned long long)arg2 minDigitLength:(unsigned long long)arg3 ;
-(long long)indexForValue:(id)arg1 ;
-(long long)indexOfOptionForCharacterPress:(id)arg1 currentIndex:(long long)arg2 ;
-(CGSize)sizeWithAttributes:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfOptions;
@end
