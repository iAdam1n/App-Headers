/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray, NSDictionary;

@interface ECCategoryMetadataEnum : NSObject <NSCopying, NSCoding> {

	NSString* _xmlName;
	NSString* _localizedLabel;
	NSMutableArray* _enumData;
	NSDictionary* _optionData;

}

@property (nonatomic,retain) NSString * xmlName;                     //@synthesize xmlName=_xmlName - In the implementation block
@property (nonatomic,retain) NSString * localizedLabel;              //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * enumData;              //@synthesize enumData=_enumData - In the implementation block
@property (nonatomic,retain) NSDictionary * optionData;              //@synthesize optionData=_optionData - In the implementation block
@property (nonatomic,readonly) BOOL preselected; 
+(id)enumFromAPIEnumData:(id)arg1 ;
+(id)optionDictFromAPIOptionData:(id)arg1 ;
+(long long)version;
-(NSString *)xmlName;
-(void)setEnumData:(NSMutableArray *)arg1 ;
-(void)setOptionData:(NSDictionary *)arg1 ;
-(NSMutableArray *)enumData;
-(NSDictionary *)optionData;
-(BOOL)preselected;
-(void)setXmlName:(NSString *)arg1 ;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(void)addDepEnumData:(id)arg1 ;
-(NSString *)localizedLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

