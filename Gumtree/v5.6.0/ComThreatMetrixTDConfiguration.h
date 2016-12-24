/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString, NSMutableArray, NSMutableString;

@interface ComThreatMetrixTDConfiguration : NSObject <NSXMLParserDelegate> {

	BOOL _error;
	unsigned long long _enable_options;
	unsigned long long _disable_options;
	NSString* _w;
	NSMutableArray* _jb_paths;
	NSString* _currentElement;
	NSMutableString* _elementValue;

}

@property (nonatomic,readonly) unsigned long long enable_options;               //@synthesize enable_options=_enable_options - In the implementation block
@property (nonatomic,readonly) unsigned long long disable_options;              //@synthesize disable_options=_disable_options - In the implementation block
@property (w,nonatomic,readonly) NSString * w;                                  //@synthesize w=_w - In the implementation block
@property (nonatomic,readonly) NSMutableArray * jb_paths;                       //@synthesize jb_paths=_jb_paths - In the implementation block
@property (nonatomic,readonly) BOOL error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * currentElement;                         //@synthesize currentElement=_currentElement - In the implementation block
@property (nonatomic,retain) NSMutableString * elementValue;                    //@synthesize elementValue=_elementValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)enable_options;
-(unsigned long long)disable_options;
-(BOOL)loadConfig:(id)arg1 ;
-(BOOL)usable;
-(NSMutableArray *)jb_paths;
-(NSString *)currentElement;
-(void)setCurrentElement:(NSString *)arg1 ;
-(NSMutableString *)elementValue;
-(void)setElementValue:(NSMutableString *)arg1 ;
-(id)init;
-(NSString *)w;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(BOOL)error;
@end
