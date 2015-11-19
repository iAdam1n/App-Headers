/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ECEnumListItem : NSObject <NSCoding> {

	NSString* _displayLabel;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
+(id)itemWithIdentifier:(id)arg1 displayLabel:(id)arg2 ;
+(id)getFirstIdentifierFromUnknownObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayLabel;
-(void)setDisplayLabel:(NSString *)arg1 ;
@end

