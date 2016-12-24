/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNGetQuoteFieldModel : FBValueObject <NSCopying> {

	NSString* _fieldType;
	NSString* _fieldTitle;
	NSArray* _fieldValues;

}

@property (nonatomic,copy,readonly) NSString * fieldType;               //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldTitle;              //@synthesize fieldTitle=_fieldTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldValues;              //@synthesize fieldValues=_fieldValues - In the implementation block
-(NSString *)fieldTitle;
-(id)initWithFieldType:(id)arg1 fieldTitle:(id)arg2 fieldValues:(id)arg3 ;
-(NSString *)fieldType;
-(NSArray *)fieldValues;
@end
