//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/NSObject-Protocol.h>

@class KHThemeManager, KHThemeProvider, NSArray, NSBundle, NSProgress, NSSet, NSString, NSURL;

@protocol KHThemeManagerSource <NSObject>
@property(readonly, nonatomic) unsigned long long sourceType;
@property(readonly, nonatomic) BOOL sourceIsLocal;
@property(readonly, nonatomic) NSURL *sourceURL;
@property(readonly, nonatomic) __weak KHThemeManager *manager;
- (NSProgress *)prepareThemePreviewsForProvider:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (NSProgress *)prepareThemesForProvider:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (NSSet *)allThemeProviders;
- (NSSet *)remoteThemeProviders;
- (NSSet *)localThemeProviders;
- (NSSet *)fetchThemeProvidersForProductCodes:(NSSet *)arg1;
- (BOOL)sourceIsAvailable;
- (void)prepareSourceWithCompletionBlock:(void (^)(void))arg1;
- (NSBundle *)bundleForThemePreview:(KHThemeProvider *)arg1;
- (NSBundle *)bundleForTheme:(KHThemeProvider *)arg1;
- (NSSet *)productCodesForThemeProvider:(KHThemeProvider *)arg1;
- (NSURL *)URLForThemePreview:(KHThemeProvider *)arg1;
- (NSURL *)URLForTheme:(KHThemeProvider *)arg1;
- (BOOL)isThemePreviewValid:(KHThemeProvider *)arg1;
- (BOOL)isThemeValid:(KHThemeProvider *)arg1;
- (BOOL)isThemePreviewLocal:(KHThemeProvider *)arg1;
- (BOOL)isThemeLocal:(KHThemeProvider *)arg1;
- (NSString *)descriptionForThemeProvider:(KHThemeProvider *)arg1;
- (NSString *)titleForThemeProvider:(KHThemeProvider *)arg1;
- (NSSet *)categoriesForThemeProvider:(KHThemeProvider *)arg1;
- (id)initWithSourceURL:(NSURL *)arg1 manager:(KHThemeManager *)arg2;
@end

