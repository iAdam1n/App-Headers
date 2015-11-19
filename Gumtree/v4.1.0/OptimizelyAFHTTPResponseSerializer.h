/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/AFURLResponseSerialization.h>

@class NSIndexSet, NSSet, NSString;

@interface OptimizelyAFHTTPResponseSerializer : NSObject <AFURLResponseSerialization> {

	unsigned long long _stringEncoding;
	NSIndexSet* _acceptableStatusCodes;
	NSSet* _acceptableContentTypes;

}

@property (assign,nonatomic) unsigned long long stringEncoding;              //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy) NSIndexSet * acceptableStatusCodes;               //@synthesize acceptableStatusCodes=_acceptableStatusCodes - In the implementation block
@property (nonatomic,copy) NSSet * acceptableContentTypes;                   //@synthesize acceptableContentTypes=_acceptableContentTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)serializer;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(NSIndexSet *)acceptableStatusCodes;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(void)setAcceptableStatusCodes:(NSIndexSet *)arg1 ;
-(void)setAcceptableContentTypes:(NSSet *)arg1 ;
-(NSSet *)acceptableContentTypes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)stringEncoding;
@end

