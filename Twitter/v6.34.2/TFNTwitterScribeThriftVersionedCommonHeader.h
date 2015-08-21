/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <Twitter/NSCoding.h>

@class TFNTwitterScribeThriftLogBase, TFNTwitterScribeThriftCommonHeader, NSString;

@interface TFNTwitterScribeThriftVersionedCommonHeader : NSObject <TBase, NSCoding> {

	BOOL _logBaseIsSet;
	BOOL _commonHeaderIsSet;
	TFNTwitterScribeThriftLogBase* _logBase;
	TFNTwitterScribeThriftCommonHeader* _commonHeader;

}

@property (nonatomic,retain) TFNTwitterScribeThriftLogBase * logBase;                        //@synthesize logBase=_logBase - In the implementation block
@property (nonatomic,readonly) BOOL logBaseIsSet;                                            //@synthesize logBaseIsSet=_logBaseIsSet - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeThriftCommonHeader * commonHeader;              //@synthesize commonHeader=_commonHeader - In the implementation block
@property (nonatomic,readonly) BOOL commonHeaderIsSet;                                       //@synthesize commonHeaderIsSet=_commonHeaderIsSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setLogBase:(TFNTwitterScribeThriftLogBase *)arg1 ;
-(void)setCommonHeader:(TFNTwitterScribeThriftCommonHeader *)arg1 ;
-(id)initWithLogBase:(id)arg1 commonHeader:(id)arg2 ;
-(TFNTwitterScribeThriftLogBase *)logBase;
-(BOOL)logBaseIsSet;
-(TFNTwitterScribeThriftCommonHeader *)commonHeader;
-(BOOL)commonHeaderIsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

